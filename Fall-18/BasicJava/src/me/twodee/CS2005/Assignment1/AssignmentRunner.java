package me.twodee.CS2005.Assignment1;

import me.twodee.CS2005.CommandLineApp;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class AssignmentRunner implements CommandLineApp
{
    @Override
    public void run(Scanner scanner) {
        String name = "John";
        String otherName = "Sean";
        if (name.equals(otherName)) {
            System.out.println("The names match!");
        }

        if (name.contains("hn")) {
            System.out.println("It contains 'hn'!");
        }

        System.out.println(name.charAt(3));
    }
}
