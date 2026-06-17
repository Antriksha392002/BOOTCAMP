import java.util.*;

public class container_with_most_water{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        
        int arr[]={1,8,6,2,5,4,8,3,7};
        int n=arr.length;
        
        int c=0,max=0;

        for(int i=0;i<9-1;i++){
            for(int j=i+1;j<9;j++){
                
                if(arr[i]<arr[j]){
                    c=arr[i]*(Math.abs(i-j));
                    
                }
                
                else{
                    c=arr[j]*(Math.abs(i-j));
                    
                }
               
                if(c>max){
                    max=c;
                }
            }
        }
        
        System.out.print(max);
    }
}