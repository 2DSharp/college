package me.twodee.CS2005.Practice;

import me.twodee.CS2005.CommandLineApp;

import java.util.Scanner;

public class PracticeRunner implements CommandLineApp
{
    @Override
    public void run(Scanner scanner)
    {
        LRUCache cache = new LRUCache(2);
        cache.put(2, 1);
        cache.put(2, 2);
        cache.get(2);

        cache.put(1, 1);
        cache.put(4, 1);
        cache.get(2);
    }
}
