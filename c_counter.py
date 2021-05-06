import os, fnmatch
file_list = []

path = '.'

for path, folders, files in os.walk(path):
    for file in files:
        if fnmatch.fnmatch(file, '*.cpp*'):
            file_list.append(os.path.join(path, file))
 
# Loop to print each filename separately
for filename in file_list:
    print(filename[2:], end=" ")

print("\n",len(file_list))