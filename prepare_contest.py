import shutil

# Safe copy overwrites placeholder files only.
def safe_copy(source, target):
  with open(target, 'r') as f:
    first_line = f.readline()
  if first_line.strip() != "// Placeholder.":
    raise RuntimeError("Would overwrite a non-placeholder file.")
  shutil.copy(source, target)


taskList = ["TaskB", "TaskC", "TaskD", "TaskE"]

for task in taskList:
  safe_copy("TaskA/local.h", task+"/local.h")
  safe_copy("TaskA/TaskA.cpp", task+"/"+task+".cpp")

