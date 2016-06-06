package com.cisco.zhiholiu;

import java.util.ArrayList;
import java.util.List;

import static java.util.Comparator.comparing;

/**
 * Created by zhiholiu on 1/19/16.
 */
public class DefaultInterface {
    public static void main(String[] args) {
        List<Person> persons = new ArrayList<>();
        persons.add(new Person("三", "张", 30, Gender.MALE));
        persons.add(new Person("四", "李", 31, Gender.FEMALE));
        persons.add(new Person("五", "王", 32, Gender.MALE));

        persons.sort(comparing(Person::getAge));
    }
}
