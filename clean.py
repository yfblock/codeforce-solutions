import os
import pathlib

excludes = [
    ".gitignore",
    "README.md",
    "clean.py"
]

for file in os.listdir("."):
    if not os.path.isfile(file) or file in excludes:
        continue

    name, extension = os.path.splitext(file)

    # check whether it is a temp file.
    if extension == '' or not os.path.exists(name):
        continue

    # remove temp file if temp file is exists.
    if os.path.exists(name):
        os.remove(name)