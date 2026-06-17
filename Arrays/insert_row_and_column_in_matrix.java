import java.util.*;

public class insert_row_and_column_in_matrix{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);

        int arr[][]={{1,2,3},{4,5,6},{7,8,9}};

        int r=arr.length;
        int c=arr[0].length;
        System.out.println("what you want \n0:row\n1:column");
        int n=sc.nextInt();
        switch(n){
            case 0: 
                    int add[][]=new int[r+1][c];

                    System.out.println("you can enter only "+r+" element");
                    System.out.println("pls enter the position where you want to enter the element");
                    int pos=sc.nextInt();
                    System.out.println("pls enter the "+c+" element");
                    int temp[]=new int[c];

                    for(int i=0;i<c;i++){
                        temp[i]=sc.nextInt();
                    }

                    for(int i=0;i<pos;i++)
                        add[i]=arr[i];

                    add[pos]=temp;

                    for(int i=pos;i<r;i++)
                        add[i+1]=arr[i];

                    for(int i=0;i<r+1;i++){
                        for(int j=0;j<c;j++){
                            System.out.print(add[i][j]+" ");
                        }
                        System.out.println();
                    }
            

            case 1:

                    
                    
        }

    }
}