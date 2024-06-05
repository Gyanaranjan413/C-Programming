class Clalculate
{
    public static void main(String[] x) 
    {
        
        int num1 =Integer.parseInt(x[0]);
        int num2 =Integer.parseInt(x[1]);

        int add = num1 + num2;
          int sub = num1 - num2;
            int mul = num1 * num2;
              int div = num1 / num2;
                int mod = num1 % num2;
        System.out.println("Addition="+add);
        System.out.println("Sudtraction="+sub);
        System.out.println("Multiplication="+mul);
        System.out.println("Division="+div);
        System.out.println("Modulus="+mod);
    }
}