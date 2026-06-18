import java.util.*;

public class leaders{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        ArrayList<Integer> list=new ArrayList<Integer>();

        int arr[]={23,1,2,15,7,5,9,3,4,6};
        int n=10;
        int max=arr[n-1];
        list.add(0,max);

        for(int i=n-2;i>=0;i--){
            if(arr[i]>=max){
                max=arr[i];
                list.add(0,max);
            }
        }

        System.out.print(list);
    }
}