/**/
import java.util.*;

class _100 {
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        long count1, count2=0, m, n, temp, i, num;
        boolean f;
        while(scan.hasNext()){
            m = scan.nextLong();
            n = scan.nextLong();
            count2=0;
            f=true;
            if(m>n){
                temp = m;
                m = n;
                n = temp;
                f=!f;
            }
            for(i=m; i<=n; i++){
                count1=0;
                if(n>1) ++count1;
                num = i;
                if(num==1){
                    ++count1;
                }
                while(num>1){
                    ++count1;
                    num=(num%2==0)?(num/2):((3*num)+1);
                }
                if(count2<count1) count2=count1;
            }
            if (f) System.out.println(m + " " + n + " " + count2);
            else System.out.println(n + " " + m + " " + count2);
        }
    }
}
