#!/bin/bash

git checkout task4 && \
  git rebase main && \
git checkout task3 && \
  git rebase task4 && \
git checkout task2 && \
  git rebase task3 && \
git checkout task1 && \
  git rebase task2 && \
git checkout main

