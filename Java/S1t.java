import java.util.*;
import java.io.*;
import java.math.*;
import java.text.ParseException;
import java.text.SimpleDateFormat;

class Genre {
    private String id, name;
    private static int count = 1;

    public Genre(String name) {
        this.id = String.format("TL%03d", count++);
        this.name = name;
    }
    public String getId() {return id;}
    public String getName() {return name;}
}

class Movie implements Comparable<Movie> {
    private String id, name, dateStr, genreName;
    private Date date;
    private int eps;
    private static int count = 1;
    private SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");

    public Movie(String genreId, String dateStr, String name, int eps, Map<String, Genre> genreMap) throws ParseException {
        
    }
}
public class S1t {

}
