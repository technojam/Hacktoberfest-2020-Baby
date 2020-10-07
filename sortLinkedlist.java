//Collections.sort() method is used below for sorting the linkedlist

import java.util.Collections;
import java.util.LinkedList;
public class LinkedListSorting{

   public static void main(String args[]){
   
   LinkedList<String> singlyLinkedList = new LinkedList<>();
   
   singlyLinkedList.add("Hey"); 
   singlyLinkedList.add("Its"); 
   singlyLinkedList.add("Hacktober"); 
   singlyLinkedList.add("twenty"); 
   singlyLinkedList.add("twenty"); 

   System.out.println("LinkedList (before sorting): " + singlyLinkedList); 
   Collections.sort(singlyLinkedList); 
   System.out.println("LinkedList (after sorting ): " + singlyLinkedList); 
 
   
   } 
   }
