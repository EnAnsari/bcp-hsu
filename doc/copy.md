# copy - paste page
adding a **question** to **question table**:
```html
<tr>
    <td>QUESTION_NUMBER</td>
    <td>QUESTION_CODE</td>
    <td>CATEGORY</td>
    <td>QUESTION</td>
    <td>unsolve</td>
</tr>
```

<br>adding **solved** to **question table**:
```html
<td>
    <a href='/src/QUESTION_CODE/'>solved</a>
</td>
```

<br>adding an **answer** to **answer table**:
```html
<tr>
    <td>NUM_OF_ANSWER</td>
    <td>
        <a href='YOUR_GITHUB_USERNAME'>NAME_AND_FAMILY</a>
    </td>
    <td>unsolved</td>
    <td>unsolved</td>
    <td>unsolved</td>
</tr>
```

<br>adding **solved** to **answer table**:
```html
<td>
    <a href='./STUDENT_ID/FILE_NAME'>solved</a>
</td>
```