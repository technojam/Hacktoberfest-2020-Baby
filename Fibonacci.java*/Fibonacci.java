public class Fibonacci {

    public static void main(String[] args) {

        int n = 10, n1 = 0, n2 = 1;
        System.out.print("First " + n + " terms: ");

        for (int i = 1; i <= n; ++i)
        {
            System.out.print(n1 + " + ");

            int sum = n1 + n2;
            n1 = n2;
            n2 = sum;
        }
    }
}
