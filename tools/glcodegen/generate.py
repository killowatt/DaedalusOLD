#!/usr/bin/env python

functions = open("functions.txt", "r").read().splitlines()
decl = open("declarations.h", "w")
defn = open("definitions.cpp", "w")

generatedText = "// Generated by the Daedalus OpenGL code generation tool.\n"
getFunctionMacro = "GETFUNC"

decl.write(generatedText)
defn.write(generatedText)

for line in functions:
    line = line.strip()

    if not line or line.startswith("//"):
        continue

    decl.write("extern PFN{0}PROC {1};\n".format
               (line.upper(), line))
    
    defn.write('{0} = (PFN{1}PROC){2}("{0}");\n'.format
               (line, line.upper(), getFunctionMacro))
