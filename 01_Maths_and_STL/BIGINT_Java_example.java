import java.math.BigInteger;
import java.util.Scanner;


public class Main{
        
    static void playWithInt(){
        String s;
        Scanner sc = new Scanner(System.in);
        String s1 = sc.next();
        String s2 = sc.next();
        
        //The second parameter denotes the base
        BigInteger one = new BigInteger(s1,2);
        BigInteger two = new BigInteger(s2,2);
        
        System.out.println(one);
        System.out.println(two);
        
        //Number of Set Bits
        System.out.println(one.bitCount());
        
        //Number of total bits
        System.out.println(one.bitLength());
        
        //To add we use add()
        one = one.add(two);
        
        //To multiply
        one = one.multiply(two);
        System.out.println(one);
        
        //Computing Factorial
        
        
        //Computing GCD
        BigInteger b1 = new BigInteger("15");
        BigInteger b2 = new BigInteger("6");
        
        System.out.println(b1.gcd(b2));
        System.out.println(b1.add(b2));
        System.out.println(b1.multiply(b2));
        
        //Next probable prime - Generates the next available prime
        BigInteger b3 = new BigInteger("25");
        System.out.println(b3.nextProbablePrime());
        
        //Power Function 
        BigInteger b4 = new BigInteger("3");
        System.out.println(b4.pow(5));
        
        //value of  - Int/Long Int to Big Integer
        BigInteger b5 = BigInteger.valueOf(100);
        System.out.println(b5);
        
        //Base Conversion
        BigInteger b6 = new BigInteger("1001",2);
        System.out.println(b6);
        
        
        
        
        
    }
    
    public static void main(String [] args){
        playWithInt();
        
    }
}