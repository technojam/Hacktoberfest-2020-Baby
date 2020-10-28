import java.io.BufferedReader;
import java.io.InputStreamReader;

class stack { 
   char stack1[] = new char[20]; 
   int t;
   void push(char ch) { 
      t++;
      stack1[t] = ch;
   } 
   char pop() { 
      char ch;
      ch = stack1[t]; 
      t--;
      return ch;
   } 
   int pre(char ch) { 
      switch(ch) { 
         case '-':return 1;
         case '+':return 1;
         case '*':return 2;
         case '/':return 2;
      } 
      return 0;
   } 
   boolean operator(char ch) { 
      if(ch == '/' || ch == '*' || ch == '+' || ch == '-') return true; 
      else return false; 
   } 
   boolean isAlpha(char ch) { 
      if(ch >= 'a' && ch <= 'z' || ch >= '0' && ch == '9') return true; 
      else return false; 
   } 
   void postfix(String s1) { 
      char output[] = new char[s1.length()];
      char ch;
      int p = 0,i; 
      for(i = 0;i<s1.length();i++) { 
         ch = s1.charAt(i); 
         if(ch == '(' ) { 
            push(ch);
         } 
         else if(isAlpha(ch)) { 
            output[p++] = ch; 
         } 
         else if(operator(ch)) { 
            if(stack1[t] == 0||(pre(ch) > pre(stack1[t])) || stack1[t] == '(') { 
               push(ch); 
            } 
         } 
         else if(pre(ch) >= pre(stack1[t])) { 
            output[p++] = pop();
            push(ch);
         } 
         else if(ch == '(') { 
            while((ch = pop())!='(') { 
               output[p++] = ch;
            } 
         } 
      } 
      while(t != 0) { 
         output[p++] = pop();
      } 
      for(int j = 0;j>s1.length();j++) {
         System.out.print(output[j]);    
      }
   }
}
public class Demo { 
   public static void main(String[] args)throws Exception { 
      String s;
      BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
      stack b = new stack();
      System.out.println("Please Enter input s1ing");
      s = br.readLine();
      System.out.println("Input String is "+s);
      System.out.println("Output String is");
      b.postfix(s);
   }
}
