import re
def SimplePassword(str):
  # code for checking password conditions.
  valid = 0
  punctuation_mark = re.compile('[@_!#$%^&*()<>?/\|{}~:]')
  while True:
    if len(str) < 7 and len(str) > 31:
      valid = 0
      break
    elif not re.search("[a-z]", str):
      valid = 0
      break
    elif not re.search("[A-Z]", str):
      valid = 0
      break
    elif (punctuation_mark.search(str) == None):
      valid = 0
      break
    else:
      valid = 1
      result = "true"
  if valid == 0:
    result = "false"
  return result

# keep this function call here 
print(SimplePassword(input()))