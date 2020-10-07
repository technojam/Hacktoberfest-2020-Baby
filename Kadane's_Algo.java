import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < arr.length; i++) {
            arr[i] = scn.nextInt();
        }
        System.out.println(solution(arr));
    }

    public static int solution(int[] arr) {
        int finalans = arr[0];
        int curr = arr[0];
        for(int i = 1 ; i < arr.length; i++){
            curr = Math.max(arr[i], arr[i] + curr);
            finalans = Math.max(finalans, curr);
        }
        return finalans; 
    }
}
