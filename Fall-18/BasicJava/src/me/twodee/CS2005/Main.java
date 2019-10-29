package me.twodee.CS2005;

import me.twodee.CS2005.Helper.MappingListing;
import me.twodee.CS2005.Practice.PracticeRunner;

import java.util.Scanner;


public class Main
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);

        CommandLineApp app = new PracticeRunner();
        app.run(scanner);
    }
}
