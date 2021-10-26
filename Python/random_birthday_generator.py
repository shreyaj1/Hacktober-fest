import datetime
import random

def random_birthday_generator(num_names):
    start = datetime.date(2011, 1, 1)
    end = datetime.date(2021, 1, 1)

    def random_date(start_date, end_date):
        t_between = end_date - start_date
        d_between = t_between.days
        rand_days = random.randrange(d_between)
        rand_date = start_date + datetime.timedelta(days=rand_days)
        return rand_date

    for i in range(0, num_names):
        print(random_date(start, end))

random_birthday_generator(5)
