package me.twodee.CS2005.Helper;

import me.twodee.CS2005.CommandLineApp;

import java.util.*;

public class MappingListing implements CommandLineApp
{

    private int maxSubArraySum(List<Integer> nums)
    {
        int max = nums.get(0);
        int tempMax = nums.get(0);
        for (int i = 0; i < nums.size(); i++) {
           tempMax = Math.max(tempMax, nums.get(i));
           max = Math.max(tempMax, max);
        }

        return max;
    }

    @Override
    public void run(Scanner scanner)
    {
        int testCases;
        testCases = scanner.nextInt();

        for (int i = 0; i < 200; i++) {
            //int max = 100, min = -100;
            //System.out.print((int)(Math.random() * ((max - min) + 1)) + min + " ");
        }
        for (int i = 0; i < testCases; i++) {
            List<Integer> nums = new ArrayList<>();
            int size = scanner.nextInt();

            for (int j = 0; j < size; j++) {
                nums.add(scanner.nextInt());
            }

            System.out.println(maxSubArraySum(nums));
        }
    }
}
