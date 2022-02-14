import wget

for file_number in range(1,1000):
    file_number = "{:06d}".format(file_number)
    file_name = "uf" + str(file_number)
    url = "https://web.archive.org/web/20190503212229im_/http://www.userfriendly.org/cartoons/archives/99feb/" + file_name + ".gif"

    print("downloading: " + url)

    wget.download(url, '~/UserFriendly/' + file_name + '.gif')
