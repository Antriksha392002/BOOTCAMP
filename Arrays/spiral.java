import java.util.*;

public class spiral {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        ArrayList<Integer> list =new ArrayList<Integer>();
        int arr[][]={{1,2,3},{4,5,6},{7,8,9}};

        int left=0,right=arr[0].length-1;
        int top=0,bottom=arr.length-1;

        while(left<=right&&top<=bottom){

            for(int i=left;i<=right;i++){
                System.out.print(arr[top][i]+" ");
            }
            top++;

            for(int i=top;i<=bottom;i++){
                System.out.print(arr[i][right]+" ");
            }
            right--;

            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    System.out.print(arr[bottom][i]+" ");
                }
                
            }
            bottom--;
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    System.out.print(arr[i][left]+" ");
                }
            }
            left++;
        }

    }
}
