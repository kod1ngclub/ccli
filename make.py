import os;

# ==== config
CONFIG_NAME     = "ccli"
CONFIG_GUARD    = "CCLI_H"
CONFIG_OUT_H    = "ccli.h"
CONFIG_OUT_C    = "ccli.c"

# ==== models
class Lib:
    def __init__(self, _head):
        self.head = _head

class Head:
    def __init__(self, _file):
        self.file = _file

class Src:
    def __init__(self, _file):
        self.file = _file

class Stage:
    def __init__(self, _files):
        self.files = _files
        self.libs = []

    def dep(self, _lib):
        self.libs.append(Lib(_lib))
        return self

class Mod:
    def __init__(self, _stages, _name):
        self.stages = _stages
        self.name = _name

# Lib       - external or standard libary
# Head      - header
# Src       - source
# Stage     - collection of Head or Src having same dependency level
# Mod       - module

ENDIF = "#endif"
def Unguard(lines):
    ifndefless = lines[2:]
    endifless = [line for line in ifndefless if not line.startswith(ENDIF)]

    return endifless

INCLUDE = "#include"
def Uninclude(lines):
    return [line for line in lines if not line.startswith(INCLUDE)]

LEFTPAD_SIZE = 16
def Leftpad(text):
    return str(text).ljust(LEFTPAD_SIZE)

def LogTable():
    sec_modname     = Leftpad("module name")
    sec_index       = Leftpad("stage level")
    sec_type        = Leftpad("type")
    sec_filename    = Leftpad("filepath")

    print(f"{sec_modname}{sec_index}{sec_type}{sec_filename}")
    print("=" * LEFTPAD_SIZE * 4)

def LogFile(modname, index, filename):
    sec_modname     = Leftpad(modname)
    sec_index       = Leftpad(f"stage/{index}")
    sec_type        = Leftpad("file")
    sec_filename    = Leftpad(filename)

    print(f"{sec_modname}{sec_index}{sec_type}{sec_filename}")

def LogLib(modname, index, libname):
    sec_modname     = Leftpad(modname)
    sec_index       = Leftpad(f"stage/{index}")
    sec_type        = Leftpad("lib")
    sec_libname     = Leftpad(libname)

    print(f"{sec_modname}{sec_index}{sec_type}{sec_libname}")

def Newline():
    print()

NEWLINE = "\n"
EMPTY   = ""
SPACE   = " "
QUOTE   = "\""

def BuildHead(mods: list[Mod]):
    filepaths   = []
    libnames    = []

    LogTable()
    for mod in mods:
        for index, stage in enumerate(mod.stages):
            for head in stage.files:
                filepaths.append(head.file)
                LogFile(mod.name, index, head.file)

            for lib in stage.libs:
                libnames.append(lib.head)
                LogLib(mod.name, index, lib.head)

    out = ""
    for filepath in filepaths:
        with open(filepath, "r") as file:
            lines = file.readlines()

            lines = Unguard(lines)
            lines = Uninclude(lines)

            out += EMPTY.join(lines)


    with open(CONFIG_OUT_H, "w") as file:
        file.write("#ifndef" + SPACE + CONFIG_GUARD + NEWLINE)
        file.write("#define" + SPACE + CONFIG_GUARD + NEWLINE)

        for libname in libnames:
            file.write("#include" + SPACE + "<" + libname + ">" + NEWLINE)

        file.write(out + NEWLINE)
        file.write("#endif" + SPACE  + "//" + SPACE + CONFIG_GUARD + NEWLINE)

def BuildSrc(mods: list[Mod]):
    filepaths   = []
    libnames    = []

    LogTable()
    for mod in mods:
        for index, stage in enumerate(mod.stages):
            for src in stage.files:
                filepaths.append(src.file)
                LogFile(mod.name, index, src.file)

            for lib in stage.libs:
                libnames.append(lib.head)
                LogLib(mod.name, index, lib.head)

    out = ""
    for filepath in filepaths:
        with open(filepath, "r") as file:
            lines = file.readlines()

            lines = Uninclude(lines)

            out += EMPTY.join(lines)


    with open(CONFIG_OUT_C, "w") as file:
        file.write("#include" + SPACE + QUOTE + CONFIG_OUT_H + QUOTE + NEWLINE)
        for libname in libnames:
            file.write("#include" + SPACE + "<" + libname + ">" + NEWLINE)
        file.write(out + NEWLINE)

# ==== heads
head0 = Mod([
    Stage([
        Head("include/arg/flag.h"),
        Head("include/arg/val.h")
    ]).dep("stdbool.h"),
    Stage([
        Head("include/arg/expect.h")
    ]).dep("stdbool.h"),
    Stage([
        Head("include/arg/api.h")
    ]).dep("stdbool.h")
], "arg")

head1 = Mod([
    Stage([
        Head("include/scan/password.h"),
        Head("include/scan/select.h"),
        Head("include/scan/val.h")
    ]).dep("stdbool.h")
], "scan")

# clear CLI
os.system('cls' if os.name == 'nt' else 'clear')

Newline()
BuildHead([
    head0,
    head1
])

# ==== src
src0 = Mod([
    Stage([
        Src("src/arg.c")
    ]).dep("stdio.h").dep("stdlib.h").dep("string.h")
], "arg")

Newline()
BuildSrc([
    src0
])
