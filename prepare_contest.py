import shutil

# Safe copy and replace copies source to target with optional replacement.
# Overwrites placeholder files only.
def safe_copy_and_replace(source, target, find_str, replace_str):
  # Safety check
  with open(target, 'r') as f:
    first_line = f.readline()
  if (first_line.strip() != "// Placeholder." and
      first_line.strip() != "# Placeholder."):
    raise RuntimeError("Would overwrite a non-placeholder file.")

  # Read contents of source file
  with open(source, 'r') as f:
    source_content = f.read()

  # Replace if needed
  if find_str is not None:
    target_content = source_content.replace(find_str, replace_str)
  else:
    target_content = source_content

  # Write target file
  with open(target, 'w') as f:
    f.write(target_content)


taskList = ["TaskB", "TaskC", "TaskD", "TaskE"]

for task in taskList:
  safe_copy_and_replace("TaskA/stdafx.h", task+"/stdafx.h", None, None)
  safe_copy_and_replace("TaskA/TaskA.cpp", task+"/"+task+".cpp",
                        "A-example", task[4]+"-example")
  safe_copy_and_replace("TaskA/compress.py", task+"/compress.py", None, None)

