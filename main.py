#!/usr/bin/env python

"""
ZetCode wxPython tutorial

In this code example, we create a
button widget.

author: Jan Bodnar
website: www.zetcode.com
last modified: July 2020
"""

import wx
import os
import cv2
import math
import datetime
from pathlib import Path

from PIL import Image, ImageDraw, ImageFilter, ImageFont


class Example(wx.Frame):

    def __init__(self, *args, **kw):
        super(Example, self).__init__(*args, **kw)
        self.InitUI()

    def InitUI(self):

        pnl = wx.Panel(self)
        closeButton = wx.DirPickerCtrl(
            pnl, pos=(20, 5), message='Select folder with images', size=(300, 50))
        polaroidButton = wx.Button(
            pnl, pos=(20, 60), label='To Polaroid', size=(300, 60))
        regular2RButton = wx.Button(
            pnl, pos=(20, 135), label='To Regular 2R', size=(300, 60))
        now = datetime.datetime.now().date()
        expire = datetime.date(2021, 6, 30)
        if(now < expire):
            polaroidButton.Bind(
                wx.EVT_BUTTON, lambda event: self.auto_instax(closeButton.GetPath()))
            regular2RButton.Bind(
                wx.EVT_BUTTON, lambda event: self.auto_2r(closeButton.GetPath()))
        else:
            polaroidButton.Bind(
                wx.EVT_BUTTON, lambda event: self.serialEndedMessage())
            regular2RButton.Bind(
                wx.EVT_BUTTON, lambda event: self.serialEndedMessage())

        self.SetSize((355, 250))
        self.SetTitle('Auto Instax')
        self.Centre()

    def OnClose(self, e):
        self.Close(True)

    def serialEndedMessage(self):
        wx.MessageBox('Sorry, Serial Expired!, please contact jhekhaa@gmail.com',
                      'Info', wx.OK | wx.ICON_INFORMATION)

    def auto_instax(self, path):
        def ShowMessage():
            wx.MessageBox('Instax Processing Completed check on /Desktop/results', 'Info',
                          wx.OK | wx.ICON_INFORMATION)

        def process(filename):
            from PIL import Image
            image = Image.open(filename, 'r')
            image_size = image.size
            width = image_size[0]
            height = image_size[1]

            if(width > height):
                image = image.rotate(-90, expand=True)
                image_size = image.size
                width = image_size[0]
                height = image_size[1]
            new_width = 525
            new_height = 700

            new_width = math.ceil((new_width/width)*width)
            image = image.resize(
                (new_width, math.ceil((new_width/width)*height)))

            image_size = image.size
            width = image_size[0]
            height = image_size[1]

            if(height > new_height):
                new_height = math.ceil((new_height/height)*height)
                image = image.resize(
                    (math.ceil((new_height/height)*width), new_height))
                image_size = image.size
                width = image_size[0]
                height = image_size[1]

            background = Image.new(
                'RGBA', (new_width, new_height), (255, 255, 255, 255))
            background.paste(image, (new_width-width, (new_height-height)))

            paper_size = (630, 889)

            paper = Image.new('RGBA', paper_size, (255, 255, 255, 255))

            offset = (round((paper_size[0] - width)/2),
                      50+round((new_height-height)/2))

            paper.paste(image, offset)

            return paper

        if not os.path.exists(f'{str(Path.home())}\\Desktop\\results\\'):
            os.makedirs(f'{str(Path.home())}\\Desktop\\results\\')

        i = 1

        cut_line = Image.new('RGBA', (1, 890), (232, 232, 232, 255))
        for filename in os.listdir(path):
            if (filename.endswith(".jpg") or filename.endswith(".JPG") or filename.endswith(".jpeg")):
                print(f"Image {i} : {filename}...")
                if(i % 2 == 1):
                    a = process(path + '\\' + filename)

                else:
                    b = process(path + '\\' + filename)
                    new_im = Image.new('RGBA', (1260, 890))
                    new_im.paste(a, (0, 0))
                    new_im.paste(cut_line, (630, 0), cut_line)
                    new_im.paste(b, (631, 0))
                    new_im = new_im.convert('RGB')
                    new_im.save(
                        f'{str(Path.home())}\\Desktop\\results\\{i//2}.jpg')
                i += 1
                continue
            else:
                continue
        ShowMessage()

    def auto_2r(self, path):
        def ShowMessage():
            wx.MessageBox('2R on 3R Processing Completed check on /Desktop/results', 'Info',
                          wx.OK | wx.ICON_INFORMATION)

        def process(filename):
            from PIL import Image
            image = Image.open(filename, 'r')
            image_size = image.size
            width = image_size[0]
            height = image_size[1]
            if(width > height):
                image = image.rotate(-90, expand=True)
                image_size = image.size
                width = image_size[0]
                height = image_size[1]

            new_width = 630
            new_height = 889

            new_width = math.ceil((new_width/width)*width)
            image = image.resize(
                (new_width, math.ceil((new_width/width)*height)))

            image_size = image.size
            width = image_size[0]
            height = image_size[1]

            if(height > new_height):
                new_height = math.ceil((new_height/height)*height)
                image = image.resize(
                    (math.ceil((new_height/height)*width), new_height))
                image_size = image.size
                width = image_size[0]
                height = image_size[1]

            background = Image.new(
                'RGBA', (new_width, new_height), (255, 255, 255, 255))
            background.paste(image, (new_width-width, (new_height-height)))

            paper_size = (630, 889)

            paper = Image.new('RGBA', paper_size, (255, 255, 255, 255))

            offset = (round((paper_size[0] - width)/2),
                      round((new_height-height)/2))

            paper.paste(image, offset)

            return paper

        if not os.path.exists(f'{str(Path.home())}\\Desktop\\results\\'):
            os.makedirs(f'{str(Path.home())}\\Desktop\\results\\')

        i = 1

        cut_line = Image.new('RGBA', (1, 890), (232, 232, 232, 255))
        for filename in os.listdir(path):
            if (filename.endswith(".jpg") or filename.endswith(".JPG") or filename.endswith(".jpeg")):
                print(f"Image {i} : {filename}...")
                if(i % 2 == 1):
                    a = process(path + '\\' + filename)

                else:
                    b = process(path + '\\' + filename)
                    new_im = Image.new('RGBA', (1260, 890))
                    new_im.paste(a, (0, 0))
                    new_im.paste(cut_line, (630, 0), cut_line)
                    new_im.paste(b, (631, 0))
                    new_im = new_im.convert('RGB')
                    new_im.save(
                        f'{str(Path.home())}\\Desktop\\results\\{i//2}.jpg')
                i += 1
                continue
            else:
                continue
        ShowMessage()


def main():

    app = wx.App()
    ex = Example(None)
    ex.Show()
    app.MainLoop()


if __name__ == '__main__':
    main()
