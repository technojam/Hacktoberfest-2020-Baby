def check(string) :
    st = set(string) 
    s = {'0', '1'} 
    if s == st or st == {'0'} or st == {'1'}: 
        print("Yes, string is binary string") 
    else : 
        print("No, string is not binary string") 
  
if __name__ == "__main__" : 
    string = input("Enter string for check: ")
    check(string) 
