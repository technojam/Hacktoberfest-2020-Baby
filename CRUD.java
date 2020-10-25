import java.io.File; 
import java.io.IOException; 
import java.io.RandomAccessFile; 
import java.lang.NumberFormatException; 
  
class CRUD { 
  
    public static void main(String data[]) 
    { 
  
        try { 
  
            String newName = data[0]; 
            long newNumber = Long.parseLong(data[1]); 
  
            String nameNumberString; 
            String name; 
            long number; 
            int index; 
  
            File file = new File("friendsContact.txt"); 
  
            if (!file.exists()) { 
  
                file.createNewFile(); 
            } 
  
            RandomAccessFile raf 
                = new RandomAccessFile(file, "rw"); 
            boolean found = false; 
  
            while (raf.getFilePointer() < raf.length()) { 
  
                nameNumberString = raf.readLine(); 
  
                index = nameNumberString.indexOf('!'); 

                name = nameNumberString 
                           .substring(0, index); 
                number 
                    = Long 
                          .parseLong( 
                              nameNumberString 
                                  .substring(index + 1)); 
  
                if (name == newName || number == newNumber) { 
                    found = true; 
                    break; 
                } 
            } 
  
            if (found == false) { 
 
                nameNumberString 
                    = newName 
                      + "!"
                      + String.valueOf(newNumber); 

                raf.writeBytes(nameNumberString); 
  
                raf.writeBytes(System.lineSeparator()); 
  
                System.out.println(" Friend added. "); 
  
                raf.close(); 
            } 

            else { 
  

                raf.close(); 
  
                System.out.println(" Input name"
                                   + " does not exists. "); 
            } 
        } 
  
        catch (IOException ioe) { 
  
            System.out.println(ioe); 
        } 
        catch (NumberFormatException nef) { 
  
            System.out.println(nef); 
        } 
    } 
}
