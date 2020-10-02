import java.util.*;
public class Decode{
     
     public static void main(String[] args){
     
     Scanner sc=new Scanner(System.in);
     String s=sc.nextLine();
     int ways=1,prevways=1;
     if(s.charAt(s.length()-1)=='0'){
     ways=0;
     }
     for(int i=s.length()-2;i>=0;i--){
     int bup=prevways;
     prevways=ways;
     if(s.charAt(i)=='0'){
     ways=0;
     continue;
     }
     int dval=Integer.parseInt(s.substring(i,i+2));
     if(dval<=26){
     ways+=bup;
     }
     }
     System.out.println(ways);
     }
     }
