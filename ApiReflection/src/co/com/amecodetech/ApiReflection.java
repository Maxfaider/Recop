package co.com.amecodetech;

import co.com.amecodetech.entity.Persona;
import java.lang.reflect.Field;
import java.lang.reflect.Method;
import java.lang.reflect.Type;
import java.util.List;

/**
 *
 * @author AMECodeTech
 * @see 05/10/2015
 * @version 1.4.1
 */
public class ApiReflection {

    public static void main(String[] args) {
        //Class c = Persona.class;
        Class c = List.class;
        //Class c = Class.forName("co.com.amecodetech.entity.Persona");
        
        System.out.println(c.getPackage());
        System.out.println("|- Class "+c.getSimpleName());
        
        classAttributes(c.getDeclaredFields());
        classMethods(c.getDeclaredMethods());
        
    }
    
    public static void classAttributes(Field[] fields) {
        System.out.println(" |- Atributos:");
        for (Field index: fields) {
            System.out.println("  |-"+index.getName()+": "+index.getType());   
        }
    }
    
    public static String classParameter(Type[] types) {
        String arguments="";
        for(Type index: types) {
            arguments+=index.getTypeName()+" ";
        }
        return arguments;
    }
    
    public static void classMethods(Method[] methods) {
        System.out.println(" |- Metodos:");
        for (Method index: methods) {
            System.out.println("  |-"+index.getName()+" ("+
                    classParameter(index.getGenericParameterTypes())+
                    "): "+index.getReturnType());   
        }
    }
    
}
