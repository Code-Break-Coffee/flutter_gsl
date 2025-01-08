import os
dir_name=os.path.dirname("./src/")
for file in os.listdir(dir_name):
    print("    - src/"+file)