package com.cisco.zhiholiu;

/**
 * Created by zhiholiu on 1/19/16.
 */
public class LambdaAsObject {
    interface MyComparator {
        boolean compare(int a1, int a2);
    }

    public static void main(String[] args) {
        MyComparator myComparator = (a1, a2) -> { return a1 > a2; };
        System.out.println(myComparator.compare(2, 5));
    }
}
