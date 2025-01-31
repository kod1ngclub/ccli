import os;

# clear CLI
os.system('cls' if os.name == 'nt' else 'clear')

class Mod:
    file        = ""
    includable  = False

    def init(self, f):
        self.file = f

        print("Mod", f, "was added")
        return self

    def include(self, allowance):
        self.includable = allowance

        print("Mod", self.file, "set include-able")
        return self

print("==== Modules lv0")
mod0 = [
    Mod().init("include/arg/cond/flag.h"),
    Mod().init("include/arg/cond/val.h"),
    Mod().init("include/arg/cond/condset.h"),

    Mod().init("include/arg/storage/datatype.h"),
    Mod().init("include/arg/storage/flag.h"),
    Mod().init("include/arg/storage/token.h"),
    Mod().init("include/arg/storage/api.h")
]

print("==== Modules lv1")
mod1 = [
    Mod().init("include/arg/cond.h"),
    Mod().init("include/arg/find.h"),
    Mod().init("include/arg/init.h"),
]

print("==== Modules lv2")
mod2 = [
    Mod().init("include/input.h"),
    Mod().init("include/password.h"),
    Mod().init("include/select.h"),
]

ENDIF = "#endif"
def unguard(lines):
    ifndefless = lines[2:]
    endifless = [line for line in ifndefless if not line.startswith(ENDIF)]

    return endifless

INCLUDE = "#include"
def uninclude(lines):
    return [line for line in lines if not line.startswith(INCLUDE)]

mods    = mod0 + mod1 + mod2

EMPTY       = ""
out         = ""
for mod in mods:
    with open(mod.file, "r") as file:
        lines = file.readlines()

        lines = unguard(lines)
        if not mod.includable: lines = uninclude(lines)

        out += EMPTY.join(lines)

NEWLINE             = "\n"
FILEGUARD_IFNDEF    = "#ifndef CCLI" + NEWLINE
FILEGUARD_DEFINE    = "#define CCLI" + NEWLINE
FILEGUARD_ENDIF     = "#endif // CCLI" + NEWLINE

OUT_FILENAME = "ccli.h"
with open(OUT_FILENAME, "w") as file:
    file.write(FILEGUARD_IFNDEF)
    file.write(FILEGUARD_DEFINE)
    file.write(out)
    file.write(FILEGUARD_ENDIF)

print()

print("Write out to", OUT_FILENAME)
