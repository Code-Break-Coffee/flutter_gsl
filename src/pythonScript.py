import os
dir_name=os.path.dirname("./src/")
files = sorted(os.listdir(dir_name))
for file in files:
    print("    - \"src/"+file+"\"")