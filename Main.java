class Multithreading2 implements Runnable 
{ 
    public void run() 
    { 
        try
        { 
            int j;
            for(j=1;j<=10;j++){
            System.out.println (j+" is running on "+ " Thread "+
                                Thread.currentThread().getId()); 
            }
        } 
        catch (Exception e) 
        { 
            // Throwing an exception 
            System.out.println ("Exception is caught"); 
        } 
    } 
} 
  

class Main
{ 
    public static void main(String[] args) 
    { 
        int n = 1; 
        for (int i=0; i<n; i++) 
        { 
            Thread object = new Thread(new Multithreading2()); 
            object.start(); 
        } 
    } 
}
