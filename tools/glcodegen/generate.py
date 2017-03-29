#!/usr/bin/env python

functions = open("functions.txt", "r").read().splitlines()
decl = open("declarations.h", "w")
defn = open("definitions.h", "w")
init = open("initialization.h", "w")

generatedText = "// Generated by the Daedalus OpenGL code generation tool.\n"
getFunctionMacro = "DGL_GETPROCADDRESS"

decl.write(generatedText)
defn.write(generatedText)

for line in functions:
    line = line.strip()

    if not line:
        continue

    if line.startswith("//"):
        decl.write(line + "\n")
        defn.write(line + "\n")
        init.write(line + "\n")
        continue

    decl.write("extern PFN{0}PROC {1};\n".format
               (line.upper(), line))
    
    defn.write("PFN{0}PROC {1};\n".format
               (line.upper(), line))
    
    init.write('{0} = (PFN{1}PROC){2}("{0}");\n'.format
               (line, line.upper(), getFunctionMacro))