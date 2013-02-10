# Alarm Limit

Kill a process after a specified number of seconds. This is an alternative to `ulimit -t`, which limits run time based on processing time, as opposed to clock time, which makes it impossible to halt a process reliably. So if—for instance—automatically running wget to harvest copies of websites, and wget gets caught up recursively indexing a poorly coded site, invoking wget via Alarm Limit can terminate the process after a predetermined amount of time.

Created by Jeff Uphoff, released into the public domain.

## Usage

Compile it:

```
gcc -Wall -ansi alarmlimit.c -o alarmlimit
```

Run it:

```
alarmlimit [time in seconds] [process]
```

For example:

```
alarmlimit 180 wget --mirror http://www.example.com/
```
