package com.cisco.zhiholiu;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/**
 * Created by zhiholiu on 1/19/16.
 */
public class LambdaWay {
    public static void main(String[] args) {
        List<Person> persons = new ArrayList<>();
        persons.add(new Person("三", "张", 30, Gender.MALE));
        persons.add(new Person("四", "李", 31, Gender.FEMALE));
        persons.add(new Person("五", "王", 32, Gender.MALE));

        Collections.sort(persons, (o1, o2) -> new Integer(o1.getAge()).compareTo(o2.getAge()));
    }
}
