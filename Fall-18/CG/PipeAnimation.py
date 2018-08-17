import itertools, sys

spinner = itertools.cycle(['-', '/', '|', '\\'])

while True:
    sys.stdout.write(spinner.next())
    sys.stdout.flush()
    sys.stdout.write('\b')
    
