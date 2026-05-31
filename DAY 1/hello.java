import java.util.*;

public class hello{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the size of the array:");
        int n=sc.nextInt();

        int[] arr=new int[5];

        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();

        }

        System.out.println("the diffrence of first and last element is: "+(arr[0]-arr[n-1]));
    }
}