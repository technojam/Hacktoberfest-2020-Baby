import java.util.*;

public class Hello {
     
     public static void main(String[] args) {
     
          Scanner sc=new Scanner(System.in);
          int r=sc.nextInt();
          int c=sc.nextInt();
          int m[][]=new int[r][c];
          int h=0,days=0;
          Queue<Integer> queue=new ArrayDeque<>();
          for(int i=0;i<r;i++){
          for(int j=0;j<c;j++){
          m[i][j]=sc.nextInt();
          if(m[i][j]==1){
          h++;
          }
          if(m[i][j]==2){
          queue.add(i*c+j);
          }
          }
          }
          queue.add(-1);
          while(!queue.isEmpty()){
          int node=queue.poll();
          if(node==-1){
                if(!queue.isEmpty()){
                days++;
                queue.add(-1);
                }
              continue;
          }
          int row=node/c,col=node%c;
          if(col!=0 && m[row][col-1]==1){
          m[row][col-1]=2;
          queue.add(row*c+col-1);
          h--;
          }
          if(col!=c-1 && m[row][col+1]==1){
          m[row][col+1]=2;
          queue.add(row*c+col+1);
          h--;
          }
          if(row!=0 && m[row-1][col]==1){
          m[row][col]=2;
          queue.add((row-1)*c+col);
          h--;
          }
          if(row!=r-1 && m[row+1][col]==1){
          m[row+1][col]=2;
          queue.add((row+1)*c+col-1);
          h--;
          }
       }
       System.out.println(h==0?days:-1);
       }
}
       
       
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
