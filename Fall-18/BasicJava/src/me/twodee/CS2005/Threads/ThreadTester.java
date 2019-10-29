package me.twodee.CS2005.Threads;

import me.twodee.CS2005.CommandLineApp;

import java.util.Scanner;

public class ThreadTester implements CommandLineApp
{
    @Override
    public void run(Scanner scanner)
    {
        Thread thread = new Thread(() -> fib(100));

        Thread thread2 = new Thread(() -> loop("Hello"));

        thread.start();
        thread2.start();
    }

    private void loop(String s) {
        for (;;)
            System.out.println(s);
    }
    private int fib(int n) {
        int result;

        if (n < 2) {
            result = n;
            System.out.println(result);
            return result;
        }

        else {
            result = fib(n - 2) + fib(n - 1);
            System.out.println(result);
            return result;
        }
    }
}
