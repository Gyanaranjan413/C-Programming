 class Test
{
    static String name="gyana";
    int x=10;
    static int roll=123;
    int y=20;

    void m1()
    {
        
        
        System.out.println(name);
        System.out.println(Text.name);
        Text t=new Test();
        System.out.println(t.name);

        System.out.println(roll);
        System.out.println(Text.roll);
        System.out.println(t.roll);

        System.out.println(x);
        System.out.println(y);
        System.out.println(t.x);
        System.out.println(t.y);

    }
    static void m2(int s)
    {
        s=4;
        int g=5;
        int k=7;
         System.out.println(name);
        System.out.println(Text.name);
        Text t=new Test();
        System.out.println(t.name);

        System.out.println(roll);
        System.out.println(Text.roll);
        System.out.println(t.roll);

        System.out.println(x);
        System.out.println(y);
        System.out.println(t.x);
        System.out.println(t.y);

        System.out.println(g);
        System.out.println(k);

    }
    public static void main(String[] args) 
    {
        Test obj=new Test();
        obj.m1();
        
        m2();

        
    }
}