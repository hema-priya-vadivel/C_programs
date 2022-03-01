import java.util.*;



 class Even
 {
   public static void main(String args[])
   { 
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter the size of an array:");
    int n=sc.nextInt();
    System.out.println("Enter the array elements:");
    int arr[]=new int[n];
    for(int i=0;i<n;i++){
      arr[i]=sc.nextInt();
    }
    System.out.println("The even elements in the array are:");
    for(int i=0;i<n;i++){
      if(arr[i]%2==0){
        System.out.println(arr[i]);
      }
    }
    
   }
 }
