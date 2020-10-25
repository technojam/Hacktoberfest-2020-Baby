import java.lang.*;
import java.util.*;
class base 
{
 public void num()
{
    Scanner sc=new Scanner(System.in);
    int Number=sc.nextInt();
    System.out.println(Number);
}
} 
class Derived extends base
  {    
    public static void main(String [] args)
    {
        Derived obj=new Derived();
        obj.num();
    }
}  
