import java.util.*;

public class dutch_national_flag{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);

        int n=sc.nextInt();
        int arr[]=new int[n];

        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        int mid=0,low=0,high=n-1;
            while(mid<=high){
            if(arr[mid]==0){

                int temp=arr[low];
                arr[low]=arr[mid];
                arr[mid]=temp;
                low++;mid++;
            }
            else if(arr[mid]==1)
                mid++;

            else if(arr[mid]==2){
                int temp=arr[mid];
                arr[mid]=arr[high];
                arr[high]=temp;
                high--;
            }
        }

        for(int i=0;i<n;i++)
            System.out.print(arr[i]+" ");
    }
}