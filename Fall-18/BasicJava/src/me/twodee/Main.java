package me.twodee;

import me.twodee.SampleQuestionApp.SmallestNumberFinder;

import java.util.*;

public class Main {

    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        CommandLineApp app = new SmallestNumberFinder();
        app.run(scanner);
    }
}
