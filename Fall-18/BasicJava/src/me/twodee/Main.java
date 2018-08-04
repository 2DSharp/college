package me.twodee;

import me.twodee.EmployeeData.EmployeeData;

import java.util.*;

public class Main {

    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        CommandLineApp app = new EmployeeData();
        app.run(scanner);
    }
}
