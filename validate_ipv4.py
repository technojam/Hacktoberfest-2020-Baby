def validateIP(ip):
  ip = ip.split('.')
  if len(ip) != 4:
    return False
  
  for elem in ip:
    if elem.isdigit():
      if elem[0] == '0':
        if not int(elem) == 0:
          return False
      if 0 <= int(elem) < 256:
        continue
      else:
        return False
    else:
      return False
  
  return True

print(validateIP('192.168.0.1'))
