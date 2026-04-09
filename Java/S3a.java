import java.util.*;
import java.text.*;
import java.io.*;

class Genre {
    private String id, name;
    private static int count = 1;

    public Genre(String name) {
        this.id = String.format("TL%03d", count++);
        this.name = name;
    }
    public String getId() { return id; }
    public String getName() { return name; }
}

class Movie implements Comparable<Movie> {
    private String id, name, dateStr, genreName;
    private Date date;
    private int episodes;
    private static int count = 1;
    private static SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");

    public Movie(String genreId, String dateStr, String name, int episodes, Map<String, Genre> genreMap) throws ParseException {
        this.id = String.format("P%03d", count++);
        this.genreName = genreMap.get(genreId).getName();
        this.dateStr = dateStr;
        this.date = sdf.parse(dateStr);
        this.name = name;
        this.episodes = episodes;
    }

    @Override
    public int compareTo(Movie other) {
        if (!this.date.equals(other.date)) {
            return this.date.compareTo(other.date);
        }
        if (!this.name.equals(other.name)) {
            return this.name.compareTo(other.name);
        }
        return other.episodes - this.episodes;
    }

    @Override
    public String toString() {
        return id + " " + genreName + " " + dateStr + " " + name + " " + episodes;
    }
}

public class S3a {
    public static void main(String[] args) throws ParseException {
        Scanner sc = new Scanner(System.in);
        if (!sc.hasNextInt()) return;
        
        int n = sc.nextInt();
        int m = sc.nextInt();
        sc.nextLine();

        Map<String, Genre> genreMap = new HashMap<>();
        for (int i = 0; i < n; i++) {
            Genre g = new Genre(sc.nextLine());
            genreMap.put(g.getId(), g);
        }

        List<Movie> movies = new ArrayList<>();
        for (int i = 0; i < m; i++) {
            String gId = sc.nextLine();
            String date = sc.nextLine();
            String name = sc.nextLine();
            int eps = Integer.parseInt(sc.nextLine());
            movies.add(new Movie(gId, date, name, eps, genreMap));
        }

        Collections.sort(movies);
        for (Movie mov : movies) {
            System.out.println(mov);
        }
        sc.close();
    }
}