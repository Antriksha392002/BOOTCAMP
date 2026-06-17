
public class diagonal_difference{
    public static void main(String args[]){
        int arr[][]={{10,3,3},{4,5,6},{7,8,9}};
        int n=arr.length;
        int sum1=0,sum2=0;

        for(int i=0;i<n;i++){

            sum1=sum1+arr[i][i];
            sum2=sum2+arr[i][n-1-i];
            
        }
        

        int diff=Math.abs(sum1-sum2);
        System.out.print(diff);
    }
}